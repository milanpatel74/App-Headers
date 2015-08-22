/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol GCKCastChannelHandler;
@class NSString;

@interface GCKCastChannel : NSObject {

	BOOL _isConnected;
	NSString* _protocolNamespace;
	id<GCKCastChannelHandler> _handler;

}

@property (nonatomic,copy) NSString * protocolNamespace;                            //@synthesize protocolNamespace=_protocolNamespace - In the implementation block
@property (assign,nonatomic) BOOL isConnected;                                      //@synthesize isConnected=_isConnected - In the implementation block
@property (assign,nonatomic,__weak) id<GCKCastChannelHandler> handler;              //@synthesize handler=_handler - In the implementation block
-(void)didConnect;
-(void)didDisconnect;
-(NSString *)protocolNamespace;
-(long long)generateRequestID;
-(void)didReceiveTextMessage:(id)arg1 ;
-(BOOL)sendTextMessage:(id)arg1 ;
-(BOOL)sendTextMessage:(id)arg1 toDestinationID:(id)arg2 ;
-(BOOL)sendBinaryMessage:(id)arg1 ;
-(id)generateRequestNumber;
-(void)setProtocolNamespace:(NSString *)arg1 ;
-(id)initWithNamespace:(id)arg1 ;
-(BOOL)sendBinaryMessage:(id)arg1 toDestinationID:(id)arg2 ;
-(void)didReceiveBinaryMessage:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setHandler:(id<GCKCastChannelHandler>)arg1 ;
-(id<GCKCastChannelHandler>)handler;
-(void)connect;
-(void)disconnect;
-(void)setIsConnected:(BOOL)arg1 ;
-(BOOL)isConnected;
@end
