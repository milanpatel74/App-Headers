/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 2:43:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/46284644-CFA2-4927-9DCF-D060DC60B9C7/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <TestFlight/OAAppDetailWebsiteLinkTableViewCell.h>

@class OASSessionContext;

@interface OAAppDetailPrivacyPolicyLinkTableViewCell : OAAppDetailWebsiteLinkTableViewCell {

	OASSessionContext* _sessionContext;

}

@property (nonatomic,retain) OASSessionContext * sessionContext;              //@synthesize sessionContext=_sessionContext - In the implementation block
-(OASSessionContext *)sessionContext;
-(void)setSessionContext:(OASSessionContext *)arg1 ;
-(void)cellWasTapped:(id)arg1 ;
-(void)awakeFromNib;
@end
