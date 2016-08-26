/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSNumber;

@interface FBEventBuyTicketsExperimentContext : FBExperimentContext {

	BOOL _canBuyTickets;
	BOOL _useExternalPartner;
	BOOL _multiTierEnabled;

}

@property (nonatomic,readonly) BOOL canBuyTickets;                            //@synthesize canBuyTickets=_canBuyTickets - In the implementation block
@property (nonatomic,readonly) BOOL useExternalPartner;                       //@synthesize useExternalPartner=_useExternalPartner - In the implementation block
@property (nonatomic,readonly) BOOL multiTierEnabled;                         //@synthesize multiTierEnabled=_multiTierEnabled - In the implementation block
@property (nonatomic,readonly) NSNumber * numTicketTiersToFetch; 
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)canBuyTickets;
-(NSNumber *)numTicketTiersToFetch;
-(BOOL)multiTierEnabled;
-(BOOL)useExternalPartner;
@end
