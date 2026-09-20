//
// LGPlaceholderView.h
// LGPlaceholderView
//
// SPDX-License-Identifier: MIT
// Copyright (c) 2015 Grigorii Lutkov <grigorii@lutkov.dev>
//

#import <UIKit/UIKit.h>

static NSString *const kLGPlaceholderViewWillShowNotification    = @"LGPlaceholderViewWillShowNotification";
static NSString *const kLGPlaceholderViewWillDismissNotification = @"LGPlaceholderViewWillDismissNotification";
static NSString *const kLGPlaceholderViewDidShowNotification     = @"LGPlaceholderViewDidShowNotification";
static NSString *const kLGPlaceholderViewDidDismissNotification  = @"LGPlaceholderViewDidDismissNotification";

@interface LGPlaceholderView : UIView

@property (strong, nonatomic) UIColor            *tintColor;
@property (strong, nonatomic) UIFont             *font;
@property (assign, nonatomic) NSTextAlignment    textAlignment;
@property (assign, nonatomic) UIEdgeInsets       contentInset;
@property (assign, nonatomic, readonly) float    progressValue;
@property (assign, nonatomic, readonly) NSString *progressText;

@property (assign, nonatomic, getter=isShowing) BOOL showing;

/** When LGPlaceholderView is showed, disable parentView.userInteractionEnabled or not (delault is NO) */
@property (assign, nonatomic, getter=isParentViewUserInteractionDisabled) BOOL parentViewUserInteractionDisabled;

- (instancetype)initWithView:(UIView *)view;
+ (instancetype)placeholderViewWithView:(UIView *)view;

- (void)setProgressValue:(float)progressValue animated:(BOOL)animated;
- (void)setProgressText:(NSString *)progressText animated:(BOOL)animated;

- (void)showActivityIndicatorAnimated:(BOOL)animated completionHandler:(void(^)())completionHandler;
- (void)showActivityIndicatorWithText:(NSString *)text animated:(BOOL)animated completionHandler:(void(^)())completionHandler;
- (void)showProgressViewAnimated:(BOOL)animated completionHandler:(void(^)())completionHandler;
- (void)showProgressViewWithText:(NSString *)text animated:(BOOL)animated completionHandler:(void(^)())completionHandler;
- (void)showText:(NSString *)text animated:(BOOL)animated completionHandler:(void(^)())completionHandler;
- (void)showView:(UIView *)view animated:(BOOL)animated completionHandler:(void(^)())completionHandler;

- (void)dismissAnimated:(BOOL)animated completionHandler:(void(^)())completionHandler;

#pragma mark -

/** Unavailable, use +placeholderViewWithView... instead */
+ (instancetype)new __attribute__((unavailable("use +placeholderViewWithView... instead")));
/** Unavailable, use -initWithView... instead */
- (instancetype)init __attribute__((unavailable("use -initWithView... instead")));
/** Unavailable, use -initWithView... instead */
- (instancetype)initWithFrame:(CGRect)frame __attribute__((unavailable("use -initWithView... instead")));

@end
