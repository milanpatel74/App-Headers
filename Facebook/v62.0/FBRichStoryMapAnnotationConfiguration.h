/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString;

@interface FBRichStoryMapAnnotationConfiguration : NSObject <MKAnnotation> {

	NSString* _title;
	NSString* _subtitle;
	CGSize _coordinate;

}

@property (assign,nonatomic) CGSize coordinate;                     //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                     //@synthesize subtitle=_subtitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 title:(id)arg3 subtitle:(id)arg4 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setCoordinate:(CGSize)arg1 ;
-(CGSize)coordinate;
@end

