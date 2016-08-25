/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, CardStack;

@interface ValidMove : NSObject {

	NSArray* cards;
	CardStack* sourceStack;
	CardStack* destStack;

}

@property (readonly) NSArray * cards; 
@property (__weak,readonly) CardStack * sourceStack; 
@property (__weak,readonly) CardStack * destStack; 
-(CardStack *)sourceStack;
-(id)initWithCards:(id)arg1 AndSource:(id)arg2 AndDest:(id)arg3 ;
-(CardStack *)destStack;
-(NSArray *)cards;
@end
