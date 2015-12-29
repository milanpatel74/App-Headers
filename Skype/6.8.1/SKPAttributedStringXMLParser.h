//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class NSMutableArray, NSMutableAttributedString, NSMutableDictionary, NSString, NSXMLParser;

@interface SKPAttributedStringXMLParser : NSObject <NSXMLParserDelegate>
{
    _Bool _elementSMS;
    NSXMLParser *_parser;
    NSMutableArray *_attributes;
    NSMutableAttributedString *_attributedString;
    NSString *_element;
    NSMutableDictionary *_elementLocations;
    NSMutableDictionary *_elementAttributes;
}

+ (id)attributedStringWithData:(id)arg1 attributes:(id)arg2 error:(id *)arg3;
@property(retain, nonatomic) NSMutableDictionary *elementAttributes; // @synthesize elementAttributes=_elementAttributes;
@property(retain, nonatomic) NSMutableDictionary *elementLocations; // @synthesize elementLocations=_elementLocations;
@property(nonatomic, getter=isElementSMS) _Bool elementSMS; // @synthesize elementSMS=_elementSMS;
@property(retain, nonatomic) NSString *element; // @synthesize element=_element;
@property(retain, nonatomic) NSMutableAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(retain, nonatomic) NSMutableArray *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSXMLParser *parser; // @synthesize parser=_parser;
- (void).cxx_destruct;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

