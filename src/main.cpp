#include <fmt/format.h>
#include <fmt/chrono.h>
#include <CLI11.hpp>

int main(int argc, char **argv)
{
  CLI::App app{ "My sample app" };
  std::string result{ "default" };
  app.add_option("-r,--result", result, "The file name to write the result to");


  try {
    app.parse(argc, argv);
  } catch (const CLI::ParseError &e) {
    return app.exit(e);
  }

  fmt::print("Hello, {}!\n", app.get_name());
  return 0;
}