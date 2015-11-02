/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIToolbar.h>

@class UILabel, NSString, WANavigationController;

@interface WAToolbar : UIToolbar {

	UILabel* _titleLabel;
	NSString* _title;
	WANavigationController* _parentNavigationController;

}

@property (nonatomic,copy) NSString * title;                                                          //@synthesize title=_title - In the implementation block
@property (assign,nonatomic,__weak) WANavigationController * parentNavigationController;              //@synthesize parentNavigationController=_parentNavigationController - In the implementation block
-(WANavigationController *)parentNavigationController;
-(void)setParentNavigationController:(WANavigationController *)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
@end

