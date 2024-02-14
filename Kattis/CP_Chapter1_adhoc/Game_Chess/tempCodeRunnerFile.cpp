getline(std::cin, s);

    for (auto x: wk) white.push_back("K" + std::string(1, x.second) + std::to_string(x.first));
    for (auto x: wq) white.push_back("K" + std::string(1, x.second) + std::to_string(x.first));
    for (auto x: wr) white.push_back("K" + std::string(1, x.second) + std::to_string(x.first));
    for (auto x: wb) white.push_back("K" + std::string(1, x.second) + std::to_string(x.first));
    for (auto x: wn) white.push_back("K" + std::string(1, x.second) + std::to_string(x.first));
    for (auto x: wp) white.push_back("K" + std::string(1, x.second) + std::to_string(x.first));

    for (auto x: bk) white.push_back("K" + std::string(1, x.second) + std::to_string(x.first));
    for (auto x: bq) white.push_back("K" + std::string(1, x.second) + std::to_string(x.first));
    for (auto x: br) white.push_back("K" + std::string(1, x.second) + std::to_string(x.first));
    for (auto x: bb) white.push_back("K" + std::string(1, x.second) + std::to_string(x.first));
    for (auto x: bn) white.push_back("K" + std::string(1, x.second) + std::to_string(x.first));
    for (auto x: bp) white.push_back("K" + std::string(1, x.second) + std::to_string(x.first));

    std::cout << "White: ";
    if (white.size()) {
        std::cout << white[0];
        for (int i = 1; i < white.size(); i++) std::cout << ", " << white[i];
    }

    std::cout << "Black: ";
    if (black.size()) {
        std::cout << black[0];
        for (int i = 1; i < black.size(); i++) std::cout << ", " << black[i];
    }