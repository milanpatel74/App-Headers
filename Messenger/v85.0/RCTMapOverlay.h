/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <MapKit/MKPolyline.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString, UIColor;

@interface RCTMapOverlay : MKPolyline <MKAnnotation> {

	NSString* _identifier;
	UIColor* _strokeColor;
	double _lineWidth;

}

@property (nonatomic,copy) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) UIColor * strokeColor;                   //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign,nonatomic) double lineWidth;                        //@synthesize lineWidth=_lineWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGPoint coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(NSString *)identifier;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
@end
