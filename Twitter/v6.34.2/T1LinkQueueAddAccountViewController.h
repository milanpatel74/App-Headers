/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:23 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNFormViewController.h>
#import <Twitter/TFNAttributedTextViewDelegate.h>

@protocol T1LinkQueueAddAccountViewControllerDelegate;
@class TFNAttributedTextView, TFNHUD, NSString;

@interface T1LinkQueueAddAccountViewController : TFNFormViewController <TFNAttributedTextViewDelegate> {

	id<T1LinkQueueAddAccountViewControllerDelegate> _delegate;
	TFNAttributedTextView* _footerView;
	TFNHUD* _hud;

}

@property (assign,nonatomic,__weak) id<T1LinkQueueAddAccountViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TFNAttributedTextView * footerView;                                           //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) TFNHUD * hud;                                                                 //@synthesize hud=_hud - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)submitForm:(id)arg1 ;
-(unsigned long long)inputRequiredBehavior;
-(void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(CGRect)arg3 ;
-(id)doneBarButtonItem;
-(void)_cancel:(id)arg1 ;
-(void)setDelegate:(id<T1LinkQueueAddAccountViewControllerDelegate>)arg1 ;
-(id)init;
-(id<T1LinkQueueAddAccountViewControllerDelegate>)delegate;
-(TFNAttributedTextView *)footerView;
-(void)setFooterView:(TFNAttributedTextView *)arg1 ;
-(TFNHUD *)hud;
-(void)setHud:(TFNHUD *)arg1 ;
-(id)footerItems;
@end
