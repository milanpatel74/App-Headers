/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSNumber;

@interface FBAdClientEvent : NSObject {

	NSString* _name;
	NSDictionary* _data;
	NSNumber* _time;
	NSString* _requestId;

}

@property (nonatomic,copy) NSString * name;                                                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDictionary * data;                                                                        //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSNumber * time;                                                                          //@synthesize time=_time - In the implementation block
@property (nonatomic,copy) NSString * requestId;                                                                       //@synthesize requestId=_requestId - In the implementation block
@property (getter=getClientEventDictionary,nonatomic,copy,readonly) NSDictionary * clientEventDictionary; 
-(id)initWithName:(id)arg1 data:(id)arg2 time:(id)arg3 requestId:(id)arg4 ;
-(id)getClientEventDictionary;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSDictionary *)data;
-(void)setData:(NSDictionary *)arg1 ;
-(void)setTime:(NSNumber *)arg1 ;
-(NSNumber *)time;
-(NSString *)requestId;
-(void)setRequestId:(NSString *)arg1 ;
@end
