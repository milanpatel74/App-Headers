/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>
#import <SolitaireFree/MFMessageComposeViewControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@class SLComposeViewController, MFMessageComposeViewController, MFMailComposeViewController, UIViewController, UIAlertView, NSString, Statistics, UIActionSheet;

@interface TellAFriend : NSObject <MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate, UIAlertViewDelegate, UIActionSheetDelegate> {

	SLComposeViewController* twitterVC;
	MFMessageComposeViewController* smsVC;
	MFMailComposeViewController* mailVC;
	UIViewController* mvc;
	UIAlertView* tellAlert;
	NSString* subject;
	NSString* emailBody;
	int type;
	Statistics* stats;
	unsigned char locked;
	int winScore;
	NSString* achieveString;
	UIActionSheet* tellAction;
	TellAFriend* selfSave;
	NSString* twitterBody;
	NSString* smsBody;

}

@property (retain) NSString * subject; 
@property (retain) NSString * emailBody; 
@property (retain) NSString * twitterBody; 
@property (retain) NSString * smsBody; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)TAFTypeToString:(int)arg1 ;
+(unsigned char)canTell;
+(unsigned char)twitter;
+(unsigned char)email;
+(unsigned char)sms;
-(id)init:(id)arg1 stats:(id)arg2 score:(int)arg3 achievements:(id)arg4 ;
-(void)tell:(int)arg1 subject:(id)arg2 emailBody:(id)arg3 twitterBody:(id)arg4 smsBody:(id)arg5 ;
-(void)flurry:(int)arg1 ;
-(void)setTwitterBody:(NSString *)arg1 ;
-(void)setSmsBody:(NSString *)arg1 ;
-(void)sendTwitter;
-(void)sendSMS;
-(void)sendEmail;
-(void)correctOrientation;
-(NSString *)twitterBody;
-(NSString *)smsBody;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
-(void)setEmailBody:(NSString *)arg1 ;
-(NSString *)emailBody;
@end
