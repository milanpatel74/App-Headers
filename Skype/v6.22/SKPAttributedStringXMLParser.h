/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSXMLParser, NSMutableArray, NSMutableAttributedString, NSMutableDictionary, NSString;

@interface SKPAttributedStringXMLParser : NSObject <NSXMLParserDelegate> {

	BOOL _elementSMS;
	NSXMLParser* _parser;
	NSMutableArray* _attributes;
	NSMutableAttributedString* _attributedString;
	NSMutableArray* _elementArray;
	NSMutableDictionary* _elementLocations;
	NSMutableDictionary* _elementAttributes;

}

@property (nonatomic,retain) NSXMLParser * parser;                                      //@synthesize parser=_parser - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributes;                               //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSMutableAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,retain) NSMutableArray * elementArray;                             //@synthesize elementArray=_elementArray - In the implementation block
@property (assign,getter=isElementSMS,nonatomic) BOOL elementSMS;                       //@synthesize elementSMS=_elementSMS - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * elementLocations;                    //@synthesize elementLocations=_elementLocations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * elementAttributes;                   //@synthesize elementAttributes=_elementAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)attributedStringWithData:(id)arg1 attributes:(id)arg2 error:(id*)arg3 ;
-(void)setElementArray:(NSMutableArray *)arg1 ;
-(void)setElementLocations:(NSMutableDictionary *)arg1 ;
-(void)setElementAttributes:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)elementArray;
-(NSMutableDictionary *)elementLocations;
-(NSMutableDictionary *)elementAttributes;
-(void)setElementSMS:(BOOL)arg1 ;
-(BOOL)isElementSMS;
-(id)initWithData:(id)arg1 ;
-(void)setAttributedString:(NSMutableAttributedString *)arg1 ;
-(NSMutableAttributedString *)attributedString;
-(NSMutableArray *)attributes;
-(void)setAttributes:(NSMutableArray *)arg1 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(NSXMLParser *)parser;
-(void)setParser:(NSXMLParser *)arg1 ;
@end
