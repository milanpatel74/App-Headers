/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNNavigationBarIcon;

@interface MNNavigationBarItemFactory : NSObject {

	MNNavigationBarIcon* _composeNavigationBarIcon;

}
+(id)backChevronButtonItemWithTarget:(id)arg1 action:(SEL)arg2 ;
+(id)backButtonItemWithTitle:(id)arg1 font:(id)arg2 tintColor:(id)arg3 target:(id)arg4 action:(SEL)arg5 maxWidth:(double)arg6 minTapWidth:(double)arg7 ;
+(void)resetTargetAndActionForBarButtonItem:(id)arg1 ;
-(id)barButtonItemWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3 width:(double)arg4 type:(long long)arg5 ;
-(id)customizedComposeBarButtonItemWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(id)barButtonItemWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(id)initWithComposerIcon:(id)arg1 ;
-(id)barButtonItemWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3 width:(double)arg4 ;
-(id)composeBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 ;
@end
