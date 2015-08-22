/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:02 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/GADGMSGHandler.h>

@class GADOpener;

@interface GADOpenerGMSGHandler : GADGMSGHandler {

	GADOpener* _opener;

}

@property (nonatomic,retain) GADOpener * opener;              //@synthesize opener=_opener - In the implementation block
+(id)actionBlockDictionary;
+(id)subActionBlockDictionary;
-(GADOpener *)opener;
-(void)setOpener:(GADOpener *)arg1 ;
-(id)initWithOpener:(id)arg1 ;
-(void)didReceiveClickNotification:(id)arg1 ;
-(void)didReceiveOpenNotification:(id)arg1 ;
-(void)fetchInAppStore:(id)arg1 ;
-(void)actionOpenInAppStore:(id)arg1 ;
-(void)actionOpenInAppPurchase:(id)arg1 ;
-(void)actionOpenBrowser:(id)arg1 ;
-(void)actionOpenWebApp:(id)arg1 ;
-(void)actionExpand:(id)arg1 ;
-(void)actionOpenApp:(id)arg1 ;
-(id)URLFromParams:(id)arg1 ;
-(unsigned long long)orientationFromParams:(id)arg1 ;
-(BOOL)shouldUseCustomClose:(id)arg1 ;
@end
