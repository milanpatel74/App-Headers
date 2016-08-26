/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TLObject.h>

@class NSString;

@interface TLphone_DhConfig : NSObject <TLObject> {

	int _g;
	int _ring_timeout;
	int _expires;
	NSString* _p;

}

@property (assign,g,nonatomic) int g;                               //@synthesize g=_g - In the implementation block
@property (p,nonatomic,retain) NSString * p;                        //@synthesize p=_p - In the implementation block
@property (assign,nonatomic) int ring_timeout;                      //@synthesize ring_timeout=_ring_timeout - In the implementation block
@property (assign,nonatomic) int expires;                           //@synthesize expires=_expires - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)TLconstructorSignature;
-(int)TLconstructorName;
-(id)TLbuildFromMetaObject:(shared_ptr<TLMetaObject>*)arg1 ;
-(void)TLfillFieldsWithValues:(map<int, TLConstructedValue, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >Ref)arg1 ;
-(NSString *)p;
-(void)setP:(NSString *)arg1 ;
-(int)ring_timeout;
-(void)setRing_timeout:(int)arg1 ;
-(void)setG:(int)arg1 ;
-(int)g;
-(void)setExpires:(int)arg1 ;
-(int)expires;
@end
