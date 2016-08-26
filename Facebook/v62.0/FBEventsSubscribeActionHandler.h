/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBEventsCarouselDelegate.h>

@protocol FBQueriedActorFieldsProtocol;
@class FBEventsCarouselToolbox, FBMemModelObject, NSString;

@interface FBEventsSubscribeActionHandler : NSObject <FBEventsCarouselDelegate> {

	FBEventsCarouselToolbox* _toolbox;
	long long _caller;
	FBMemModelObject*<FBQueriedActorFieldsProtocol> _eventOwner;

}

@property (nonatomic,retain) FBMemModelObject*<FBQueriedActorFieldsProtocol> eventOwner;              //@synthesize eventOwner=_eventOwner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapHeader:(id)arg1 ;
-(void)didTapFooter:(id)arg1 ;
-(void)didTapXout:(id)arg1 onEvent:(id)arg2 ;
-(FBMemModelObject*<FBQueriedActorFieldsProtocol>)eventOwner;
-(void)setEventOwner:(FBMemModelObject*<FBQueriedActorFieldsProtocol>)arg1 ;
-(id)initWithToolbox:(id)arg1 eventOwner:(id)arg2 caller:(long long)arg3 ;
@end
