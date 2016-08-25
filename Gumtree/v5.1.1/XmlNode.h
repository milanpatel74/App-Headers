/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSObject;

@interface XmlNode : NSObject {

	NSString* name;
	NSString* nameSpaceUri;
	NSDictionary* attributes;
	NSObject* contents;
	XmlNode* parent;

}

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * nameSpaceUri; 
@property (nonatomic,retain) NSDictionary * attributes; 
@property (nonatomic,retain) NSObject * contents; 
@property (nonatomic,retain) XmlNode * parent; 
-(id)findNodeInChildren:(id)arg1 ;
-(id)getContentsAsString;
-(id)initWithData:(id)arg1 nameSpace:(id)arg2 attribs:(id)arg3 content:(id)arg4 parent:(id)arg5 ;
-(long long)getContentsAsInteger;
-(NSString *)nameSpaceUri;
-(void)setNameSpaceUri:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSObject *)contents;
-(void)setContents:(NSObject *)arg1 ;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(XmlNode *)parent;
-(void)setParent:(XmlNode *)arg1 ;
@end
