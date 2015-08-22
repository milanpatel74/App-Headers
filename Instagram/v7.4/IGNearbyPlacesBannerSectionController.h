/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:16 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGSearchSectionController.h>

@class UIViewController, NSString;

@interface IGNearbyPlacesBannerSectionController : NSObject <IGSearchSectionController> {

	UIViewController* _viewController;

}

@property (nonatomic,__weak,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 cellForIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectIndexPath:(id)arg2 searchString:(id)arg3 ;
-(id)initWithTableView:(id)arg1 viewController:(id)arg2 ;
-(unsigned long long)numberOfRows;
-(UIViewController *)viewController;
@end
