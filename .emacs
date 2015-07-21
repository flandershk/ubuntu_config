(custom-set-variables
  ;; custom-set-variables was added by Custom.
  ;; If you edit it by hand, you could mess it up, so be careful.
  ;; Your init file should contain only one such instance.
  ;; If there is more than one, they won't work right.
 '(scroll-bar-mode nil)
 '(tool-bar-mode nil))
;; color theme
;(load-file "~/.emacs.d/color-theme.el")
;(require 'color-theme)
;(color-theme-calm-forest)

(custom-set-faces
  ;; custom-set-faces was added by Custom.
  ;; If you edit it by hand, you could mess it up, so be careful.
  ;; Your init file should contain only one such instance.
  ;; If there is more than one, they won't work right.
 '(default ((t (:inherit nil :stipple nil :background "black" :foreground "#00d75f" :inverse-video nil :box nil :strike-through nil :overline nil :underline nil :slant normal :weight normal :height 128 :width normal :foundry "unknown" :family "Monaco")))))

(global-linum-mode t)
;(load "~/.emacs.d/vimpulse.el")
;(require 'vimpulse)
;
(global-set-key [f11] 'my-fullscreen)

(defun my-fullscreen ()
 (interactive)
   (x-send-client-message
      nil 0 nil "_NET_WM_STATE" 32
         '(2 "_NET_WM_STATE_FULLSCREEN" 0))
         )
