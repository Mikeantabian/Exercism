namespace eval resistorColor {

    # Define the color code array
    array set color_code {
        black   0
        brown   1
        red     2
        orange  3
        yellow  4
        green   5
        blue    6
        violet  7
        grey    8
        white   9
    }

    proc colorCode {color} {
        variable color_code
        if {[info exists color_code($color)]} {
            return $color_code($color)
        } else {
            return -code error "Invalid color: $color"
        }
    }

    proc colors {} {
        set color_list {black brown red orange yellow green blue violet grey white}
        return [join $color_list " "]
    }
}
