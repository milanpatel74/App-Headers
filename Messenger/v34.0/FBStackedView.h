/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBFIGConfigurable.h>

@protocol FBStackedViewLayout;
@class UIView, NSString;

@interface FBStackedView : UIView <FBFIGConfigurable> {

	id<FBStackedViewLayout> _layout;
	UIEdgeInsets _edgeInsets;
	UIView* _backgroundView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultFIGConfig;
+(id)newWithConfig:(id)arg1 ;
+(id)layoutForLayoutType:(unsigned long long)arg1 ;
+(id)newWithLayoutType:(unsigned long long)arg1 ;
+(void)initialize;
-(void)oldConfig:(id)arg1 configDidChange:(id)arg2 ;
-(void)applyConfig:(id)arg1 ;
-(id)_stackableViews;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_init;
-(id)config;
@end
