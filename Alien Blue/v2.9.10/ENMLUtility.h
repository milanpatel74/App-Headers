/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSMutableString, KSHTMLWriter, NSArray, NSXMLParser, NSString;

@interface ENMLUtility : NSObject <NSXMLParserDelegate> {

	BOOL _shouldIgnoreNextEndElement;
	NSMutableString* _outputHTML;
	KSHTMLWriter* _htmlWriter;
	NSArray* _resources;
	/*^block*/id _completionBlock;
	NSXMLParser* _xmlParser;

}

@property (nonatomic,retain) NSMutableString * outputHTML;                 //@synthesize outputHTML=_outputHTML - In the implementation block
@property (nonatomic,retain) KSHTMLWriter * htmlWriter;                    //@synthesize htmlWriter=_htmlWriter - In the implementation block
@property (nonatomic,retain) NSArray * resources;                          //@synthesize resources=_resources - In the implementation block
@property (nonatomic,copy) id completionBlock;                             //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSXMLParser * xmlParser;                      //@synthesize xmlParser=_xmlParser - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreNextEndElement;              //@synthesize shouldIgnoreNextEndElement=_shouldIgnoreNextEndElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mediaTagWithDataHash:(id)arg1 mime:(id)arg2 ;
-(void)convertENMLToHTML:(id)arg1 withResources:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setXmlParser:(NSXMLParser *)arg1 ;
-(void)setOutputHTML:(NSMutableString *)arg1 ;
-(NSMutableString *)outputHTML;
-(void)setHtmlWriter:(KSHTMLWriter *)arg1 ;
-(NSXMLParser *)xmlParser;
-(KSHTMLWriter *)htmlWriter;
-(void)setShouldIgnoreNextEndElement:(BOOL)arg1 ;
-(void)writeTodoWithAttributes:(id)arg1 ;
-(void)writeResource:(id)arg1 withAttributes:(id)arg2 ;
-(BOOL)shouldIgnoreNextEndElement;
-(void)writeImageTagForResource:(id)arg1 withAttributes:(id)arg2 ;
-(void)convertENMLToHTML:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSArray *)resources;
-(void)setResources:(NSArray *)arg1 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parserDidEndDocument:(id)arg1 ;
-(void)parser:(id)arg1 foundCDATA:(id)arg2 ;
-(void)parser:(id)arg1 foundComment:(id)arg2 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
@end
