pkgname=somebar-wayrice
pkgver=1.0.3.r10.ac97bc6
pkgrel=1
pkgdesc="dwm-like bar for dwl"
arch=('x86_64')
url="https://git.sr.ht/~raphi/somebar"
depends=()
makedepends=('git' 'meson' 'wayland-protocols' 'cairo' 'pango')
provides=("somebar")
conflicts=("${pkgname%-git}")

#prepare() {
#	cd ../
#	# Use a custom config.hpp if the file is not empty
#        if [ -s "$srcdir/config.hpp" ]; then
#		cp -f "$srcdir/config.hpp" src/config.hpp
#	else
#		cp -f src/config.def.hpp src/config.hpp
#	fi
#}

build() {
	cd ../
	arch-meson build
	meson compile -C build
}

package() {
	cd ../
	meson install -C build --destdir "$pkgdir"
}

