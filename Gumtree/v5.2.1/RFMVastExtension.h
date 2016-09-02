/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 1, 2016 at 6:29:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/97A55C60-C4F1-459B-870D-76E85F65D812/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/RFMVastBase.h>
#import <Gumtree/RFMXMLModelProtocol.h>

@class NSString;

@interface RFMVastExtension : RFMVastBase <RFMXMLModelProtocol> {

	NSString* _stringValue;

}

@property (nonatomic,retain) NSString * stringValue;                //@synthesize stringValue=_stringValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)handleElement:(id)arg1 attributes:(id)arg2 foundCharacters:(id)arg3 ;
-(BOOL)handlePropertyWithModel:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
@end
