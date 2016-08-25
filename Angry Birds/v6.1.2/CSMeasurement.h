/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface CSMeasurement : NSObject {

	NSMutableDictionary* _labelsMap;
	double _created;
	NSString* _pixelURL;

}

@property (nonatomic,retain) NSString * pixelURL;              //@synthesize pixelURL=_pixelURL - In the implementation block
+(id)sortLabelsForTransmission:(id)arg1 ;
-(id)retrieveLabelsAsString:(id)arg1 ;
-(id)initWithCore:(id)arg1 ;
-(NSString *)pixelURL;
-(void)setPixelURL:(NSString *)arg1 ;
-(void)addLabels:(id)arg1 ;
-(void)addLabels:(id)arg1 aggregate:(BOOL)arg2 ;
-(BOOL)hasLabel:(id)arg1 ;
-(void)appendLabel:(id)arg1 ;
-(void)removeLabel:(id)arg1 aggregate:(BOOL)arg2 nedstatPrivilege:(BOOL)arg3 ;
-(void)appendLabel:(id)arg1 value:(id)arg2 aggregate:(BOOL)arg3 nedstatPrivilege:(BOOL)arg4 ;
-(id)getLabel:(id)arg1 ;
-(id)getLabelValue:(id)arg1 ;
-(void)setLabel:(id)arg1 value:(id)arg2 aggregate:(BOOL)arg3 ;
-(void)dealloc;
-(void)setLabel:(id)arg1 ;
-(id)getLabels;
-(void)setLabel:(id)arg1 value:(id)arg2 ;
-(id)package;
@end
