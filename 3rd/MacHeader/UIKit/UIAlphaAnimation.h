/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIAnimation.h"


@interface UIAlphaAnimation : UIAnimation {
	float _startAlpha;
	float _endAlpha;
}
-(void)setStartAlpha:(float)alpha;
-(void)setEndAlpha:(float)alpha;
-(float)_alphaForMultiplier:(float)multiplier;
-(void)setProgress:(float)progress;
-(float)alphaForFraction:(float)fraction;
@end

