/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIControl.h>
#import <Availability2.h>

@class UILabel, NSMutableArray, NSTimer, UIImageView;

@interface UICalloutView : UIControl {
	UIImageView* _leftCap;
	UIImageView* _rightCap;
	UIImageView* _topAnchor;
	UIImageView* _bottomAnchor;
	UIImageView* _leftBackground;
	UIImageView* _rightBackground;
	UILabel* _title;
	UILabel* _subtitle;
	UILabel* _temporary;
	UIView* _leftView;
	UIView* _rightView;
	struct {
		CGPoint origin;
		CGPoint offset;
		int position;
		CGPoint desiredPoint;
		CGRect desiredBounds;
	} _anchor;
	CGRect _frame;
	id _delegate;
	struct {
		unsigned shouldSendTouchPauseUp : 1;
		unsigned delegateViewHandleTapWithCountEvent : 1;
		unsigned delegateViewHandleTapWithCountEventFingerCount : 1;
		unsigned delegateViewHandleTouchPauseIsDown : 1;
		unsigned reserved : 28;
	} _flags;
	NSMutableArray* _fadeInViews;
	NSMutableArray* _fadeOutViews;
	NSTimer* _layoutAnimationTimer;
}
@property(retain, nonatomic) UIView* leftView;
@property(retain, nonatomic) UIView* rightView;
@property(assign, nonatomic) BOOL canAnchorFromBottom;
@property(assign, nonatomic) int subtitleTextAlignment __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_1);
@property(assign, nonatomic) int titleTextAlignment __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_1);
@property(assign, nonatomic) int subtitleLineBreakMode;
@property(assign, nonatomic) int titleLineBreakMode;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
@property(readonly, assign, nonatomic) float UICalloutViewMinimumWidth;
@property(readonly, assign, nonatomic) float UICalloutViewVerticalMargin;
@property(readonly, assign, nonatomic) float UICalloutViewHorizontalPadding;
@property(readonly, assign, nonatomic) float UICalloutViewHorizontalMargin;
@property(readonly, assign, nonatomic) float UICalloutViewButtonPadding;
@property(readonly, assign, nonatomic) float UICalloutViewLayoutDuration;
@property(readonly, assign, nonatomic) float UICalloutViewCapPaddingTop;
@property(readonly, assign, nonatomic) float UICalloutViewCapHeight;
#endif
+(id)_backgroundImage;
+(id)_leftCapImage;
+(id)_rightCapImage;
+(id)_topAnchorImage;
+(id)_bottomAnchorImage;
+(float)defaultHeight;
+(UICalloutView*)sharedCalloutView;
-(void)_setLeftView:(id)view;
-(void)_setRightView:(id)view;
-(void)_scheduleViewToFadeIn:(id)anIn;
-(void)_scheduleViewToFadeOut:(id)fadeOut;
-(void)setLeftView:(id)view animated:(BOOL)animated;
-(void)setRightView:(id)view animated:(BOOL)animated;
-(void)setSubtitle:(id)subtitle animated:(BOOL)animated;
-(void)_setLayoutAnimationTimer:(id)timer;
-(void)_layoutAnimation;
-(void)_scheduleLayoutAnimation;
-(void)_fadeViewsIn:(BOOL)anIn;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)setTitle:(id)title;
-(id)title;
-(void)setSubtitle:(id)subtitle;
-(id)subtitle;
-(void)setTemporaryTitle:(id)title;
-(id)temporaryTitle;
-(void)setOffset:(CGPoint)offset;
-(CGPoint)offset;
-(CGPoint)anchorPoint;
-(void)getActualAnchorPoint:(CGPoint*)point frame:(CGRect*)frame position:(int*)position forDesiredAnchorPoint:(CGPoint)desiredAnchorPoint boundaryRect:(CGRect)rect;
-(void)_setOriginForScale:(float)scale;
-(void)_layoutSubviews:(BOOL)subviews;
-(void)setAnchorPoint:(CGPoint)point boundaryRect:(CGRect)rect animate:(BOOL)animate;
-(void)animationDidStop:(id)animation finished:(id)finished context:(void*)context;
-(void)fadeOutWithDuration:(float)duration;
-(void)_markDidMoveCalled;
-(void)completeBounceAnimation;
-(void)addTarget:(id)target action:(SEL)action;
-(void)removeTarget:(id)target;
-(void)setDelegate:(id)delegate;
-(id)delegate;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
@end

