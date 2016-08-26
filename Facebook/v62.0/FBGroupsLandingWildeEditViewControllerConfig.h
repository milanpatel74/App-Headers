/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGroupsLandingEditViewControllerConfig.h>

@class UIColor;

@interface FBGroupsLandingWildeEditViewControllerConfig : NSObject <FBGroupsLandingEditViewControllerConfig> {

	BOOL _forceReloadOnViewAppear;
	UIColor* _backgroundColor;
	UIColor* _footerTextColor;
	UIColor* _footerBackgroundColor;

}

@property (nonatomic,retain) UIColor * backgroundColor;                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * footerTextColor;                    //@synthesize footerTextColor=_footerTextColor - In the implementation block
@property (nonatomic,retain) UIColor * footerBackgroundColor;              //@synthesize footerBackgroundColor=_footerBackgroundColor - In the implementation block
@property (assign,nonatomic) BOOL forceReloadOnViewAppear;                 //@synthesize forceReloadOnViewAppear=_forceReloadOnViewAppear - In the implementation block
-(void)setFooterTextColor:(UIColor *)arg1 ;
-(void)setFooterBackgroundColor:(UIColor *)arg1 ;
-(id)sectionHeaderWithTitle:(id)arg1 ;
-(UIColor *)footerBackgroundColor;
-(BOOL)forceReloadOnViewAppear;
-(void)setForceReloadOnViewAppear:(BOOL)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)init;
-(UIColor *)footerTextColor;
@end
