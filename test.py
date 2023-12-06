import curses

def main(stdscr):
    curses.curs_set(0) # Make cursor invisible
    sh, sw = stdscr.getmaxyx()

    # Colors
    curses.init_pair(1, curses.COLOR_BLACK, curses.COLOR_WHITE)
    curses.init_pair(2, curses.COLOR_RED, curses.COLOR_BLACK)

    # Header
    stdscr.attron(curses.color_pair(1))
    stdscr.addstr(0, 0, "Fort V1.0 Buldt")
    stdscr.attroff(curses.color_pair(1))

    # Buld OrangeColor * B16602
    stdscr.attron(curses.color_pair(2))
    stdscr.addstr(2, 2, "Buld OrangeColor * B16602")
    stdscr.attroff(curses.color_pair(2))

    # Off Fary 100
    stdscr.attron(curses.color_pair(1))
    stdscr.addstr(4, 2, "OFF Fary 100")
    stdscr.attroff(curses.color_pair(1))

    # Prefire Kay * 2CA319
    stdscr.attron(curses.color_pair(2))
    stdscr.addstr(6, 2, "Prefire Kay * 2CA319")
    stdscr.attroff(curses.color_pair(2))

    # NO Shogun Shot 2
    stdscr.attron(curses.color_pair(1))
    stdscr.addstr(8, 2, "NO Shogun Shot 2")
    stdscr.attroff(curses.color_pair(1))

    # Kigod
    stdscr.attron(curses.color_pair(2))
    stdscr.addstr(10, 2, "Kigod")
    stdscr.attroff(curses.color_pair(2))

    stdscr.refresh()
    stdscr.getch()

curses.wrapper(main)