/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:16 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECThinModule.h>

@class ECAd;

@interface ECPostThinModule : ECThinModule {

	ECAd* _adToEdit;

}

@property (nonatomic,retain) ECAd * adToEdit;              //@synthesize adToEdit=_adToEdit - In the implementation block
-(ECAd *)adToEdit;
-(id)tabBarIcon;
-(id)selectedTabBarIcon;
-(void)createRootViewController;
-(void)setAdToEdit:(ECAd *)arg1 ;
-(id)init;
-(id)name;
-(id)identifier;
-(Class)rootViewControllerClass;
@end
