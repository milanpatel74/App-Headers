/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBNuxToolTipView.h>

@protocol FBMagicStoryNuxViewDelegate;
@interface FBMagicStoryNuxView : FBNuxToolTipView {

	id<FBMagicStoryNuxViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMagicStoryNuxViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapCloseButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBMagicStoryNuxViewDelegate>)arg1 ;
-(id<FBMagicStoryNuxViewDelegate>)delegate;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
@end
