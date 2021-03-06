/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TLObject.h>

@class NSString, TLInputBotInlineMessage;

@interface TLInputBotInlineResult : NSObject <TLObject> {

	NSString* _n_id;
	NSString* _short_name;
	TLInputBotInlineMessage* _send_message;

}

@property (nonatomic,retain) NSString * n_id;                                     //@synthesize n_id=_n_id - In the implementation block
@property (nonatomic,retain) NSString * short_name;                               //@synthesize short_name=_short_name - In the implementation block
@property (nonatomic,retain) TLInputBotInlineMessage * send_message;              //@synthesize send_message=_send_message - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)TLconstructorSignature;
-(int)TLconstructorName;
-(id)TLbuildFromMetaObject:(shared_ptr<TLMetaObject>*)arg1 ;
-(void)TLfillFieldsWithValues:(map<int, TLConstructedValue, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >Ref)arg1 ;
-(void)setN_id:(NSString *)arg1 ;
-(NSString *)n_id;
-(NSString *)short_name;
-(void)setShort_name:(NSString *)arg1 ;
-(TLInputBotInlineMessage *)send_message;
-(void)setSend_message:(TLInputBotInlineMessage *)arg1 ;
@end

