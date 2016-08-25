/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EBNShoppingCartStateProtocol;
@interface EBUShoppingCartStateContext : NSObject {

	id<EBNShoppingCartStateProtocol> _currentState;

}

@property (nonatomic,retain) id<EBNShoppingCartStateProtocol> currentState;              //@synthesize currentState=_currentState - In the implementation block
+(id)contextWithDelegate:(id)arg1 ;
-(BOOL)enableCheckout;
-(id)sectionsForState;
-(id)headerForState;
-(id)footerForState;
-(void)advanceStateToState:(unsigned long long)arg1 ;
-(void)performingItemOperation;
-(id)emptyCellForState;
-(void)advanceState;
-(void)dealloc;
-(id<EBNShoppingCartStateProtocol>)currentState;
-(void)setCurrentState:(id<EBNShoppingCartStateProtocol>)arg1 ;
-(void)refreshState;
@end
