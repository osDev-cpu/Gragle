#include <SDL3/SDL.h>
#include <iostream>
#include "BrowserApp.hpp"
#include "HtmlParser.hpp"

int main(int argc, char* argv[]) {
    
    std::string htmlContent = BrowserApp::fetchWebPage("https://example.com");
    std::cout << "HTML berhasil dimuat! Ukuran: " << htmlContent.size() << " bytes\n";

    // 2. Parse HTML ke DOM Tree
    DOMNode* dom = HtmlParser::parse(htmlContent);

    
    if (!SDL_Init(SDL_INIT_VIDEO)) {
        std::cerr << "SDL3 Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    SDL_Window* window = SDL_CreateWindow("My Hardcore C++ Browser", 1024, 768, SDL_WINDOW_RESIZABLE);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, NULL);

    bool running = true;
    SDL_Event event;

    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_QUIT) {
                running = false;
            }
        }

        // Background Putih Ala Halaman Web
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_RenderClear(renderer);

       
        SDL_FRect headerBox = { 50.0f, 50.0f, 924.0f, 80.0f };
        SDL_SetRenderDrawColor(renderer, 41, 128, 185, 255); // Warna Biru
        SDL_RenderFillRect(renderer, &headerBox);

        
        SDL_FRect contentBox = { 50.0f, 150.0f, 924.0f, 400.0f };
        SDL_SetRenderDrawColor(renderer, 236, 240, 241, 255); // Warna Abu-abu terang
        SDL_RenderFillRect(renderer, &contentBox);

        SDL_RenderPresent(renderer);
    }

    delete dom;
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
