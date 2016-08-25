/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@protocol CSMailerDelegate;
@class NSString;

@interface CSMailer : NSObject <MFMailComposeViewControllerDelegate> {

	id<CSMailerDelegate> _delegate;

}

@property (assign,nonatomic) id<CSMailerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instance;
-(void)showWithAddress:(id)arg1 subject:(id)arg2 category:(id)arg3 delegate:(id)arg4 ;
-(id)defaultCSEmailTextWithCategory:(id)arg1 ;
-(void)showFailureMessageDialog:(id)arg1 ;
-(void)showSuccessMessageDialog:(id)arg1 ;
-(void)setDelegate:(id<CSMailerDelegate>)arg1 ;
-(id<CSMailerDelegate>)delegate;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
@end
