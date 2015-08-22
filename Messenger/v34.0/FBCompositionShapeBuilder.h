/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSArray;

@interface FBCompositionShapeBuilder : NSObject {

	NSString* _name;
	NSString* _klass;
	NSString* _color;
	double _lineWidth;
	double _rotation;
	BOOL _filled;
	NSArray* _properties;
	double _cornerRadius;

}
+(id)aCompositionShape;
+(id)aCompositionShapeFromExistingCompositionShape:(id)arg1 ;
-(id)withName:(id)arg1 ;
-(id)withProperties:(id)arg1 ;
-(id)withKlass:(id)arg1 ;
-(id)withColor:(id)arg1 ;
-(id)withLineWidth:(double)arg1 ;
-(id)withRotation:(double)arg1 ;
-(id)withFilled:(BOOL)arg1 ;
-(id)withCornerRadius:(double)arg1 ;
-(id)build;
@end
