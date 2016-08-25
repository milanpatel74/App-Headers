/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@protocol MFMailComposeViewControllerDelegate;
@class MFMailComposeViewController, NSString;

@interface GADMailComposeDelegateProxy : NSObject <MFMailComposeViewControllerDelegate> {

	GADMailComposeDelegateProxy* _strongSelf;
	id<MFMailComposeViewControllerDelegate> _mailComposeDelegate;
	MFMailComposeViewController* _mailComposeViewController;

}

@property (assign,nonatomic,__weak) id<MFMailComposeViewControllerDelegate> mailComposeDelegate;              //@synthesize mailComposeDelegate=_mailComposeDelegate - In the implementation block
@property (nonatomic,retain) MFMailComposeViewController * mailComposeViewController;                         //@synthesize mailComposeViewController=_mailComposeViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)associatedDelegateProxyForController:(id)arg1 ;
-(void)stopProxying;
-(id)init;
-(void)setMailComposeDelegate:(id<MFMailComposeViewControllerDelegate>)arg1 ;
-(MFMailComposeViewController *)mailComposeViewController;
-(void)setMailComposeViewController:(MFMailComposeViewController *)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(id<MFMailComposeViewControllerDelegate>)mailComposeDelegate;
-(id)initInternal;
@end
