/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AlienBlue/AlienBlue-Structs.h>
@class NSData, NSString;

@interface FABIcon : NSObject {

	BOOL _prerendered;
	NSData* _data;
	NSString* _dataHash;
	CGSize _size;

}

@property (nonatomic,copy) NSData * data;                                //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * dataHash;                          //@synthesize dataHash=_dataHash - In the implementation block
@property (assign,nonatomic) CGSize size;                                //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) BOOL prerendered;                           //@synthesize prerendered=_prerendered - In the implementation block
@property (nonatomic,readonly) double surfaceArea; 
@property (nonatomic,readonly) BOOL isWithinMaxSurfaceArea; 
+(BOOL)isWithinMaxSurfaceAreaWithImage:(id)arg1 ;
-(NSString *)dataHash;
-(id)initWithData:(id)arg1 dataHash:(id)arg2 size:(CGSize)arg3 prerendered:(BOOL)arg4 ;
-(id)initWithData:(id)arg1 size:(CGSize)arg2 prerendered:(BOOL)arg3 ;
-(double)surfaceArea;
-(id)initWithData:(id)arg1 size:(CGSize)arg2 ;
-(id)initWithPNGImageAtPath:(id)arg1 size:(CGSize)arg2 prerendered:(BOOL)arg3 ;
-(BOOL)isWithinMaxSurfaceArea;
-(BOOL)largerThanSize:(CGSize)arg1 ;
-(void)setDataHash:(NSString *)arg1 ;
-(BOOL)prerendered;
-(CGSize)size;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setPrerendered:(BOOL)arg1 ;
@end
