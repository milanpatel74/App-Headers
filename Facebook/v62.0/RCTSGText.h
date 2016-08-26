/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:43 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/RCTSGGroup.h>

@class NSString, UIColor, NSDictionary, NSArray;

@interface RCTSGText : RCTSGGroup {

	unsigned long long _fragmentUID;
	unsigned long long _vertexUID;
	unsigned _program;
	unsigned _textureId;
	float _aspect;
	float _textLayout[4];
	BOOL _zWrite;
	int _sortOrder;
	int _blendMode;
	int _ztestMode;
	int _vAlign;
	int _maxTextureWidth;
	int _maxTextureHeight;
	int _lineSpacing;
	NSString* _text;
	NSString* _fontName;
	double _fontSize;
	double _spacing;
	long long _align;
	long long _lineBreak;
	UIColor* _textColor;
	/*^block*/id _onTextLayout;
	NSString* _vertexProgram;
	NSString* _fragmentProgram;
	NSDictionary* _uniforms;
	RCTSGVec2 _shadowOffset;
	double _shadowAmount;
	NSArray* _groups;
	NSArray* _groupsColor;
	RCTSGVec4 _shadowColor;

}

@property (assign,nonatomic) BOOL zWrite;                           //@synthesize zWrite=_zWrite - In the implementation block
@property (assign,nonatomic) int sortOrder;                         //@synthesize sortOrder=_sortOrder - In the implementation block
@property (nonatomic,copy) NSString * text;                         //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * fontName;                     //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) double fontSize;                       //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) int blendMode;                         //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) int ztestMode;                         //@synthesize ztestMode=_ztestMode - In the implementation block
@property (assign,nonatomic) int vAlign;                            //@synthesize vAlign=_vAlign - In the implementation block
@property (assign,nonatomic) int maxTextureWidth;                   //@synthesize maxTextureWidth=_maxTextureWidth - In the implementation block
@property (assign,nonatomic) int maxTextureHeight;                  //@synthesize maxTextureHeight=_maxTextureHeight - In the implementation block
@property (assign,nonatomic) int lineSpacing;                       //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (assign,nonatomic) double spacing;                        //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) long long align;                       //@synthesize align=_align - In the implementation block
@property (assign,nonatomic) long long lineBreak;                   //@synthesize lineBreak=_lineBreak - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                     //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy) id onTextLayout;                         //@synthesize onTextLayout=_onTextLayout - In the implementation block
@property (nonatomic,copy) NSString * vertexProgram;                //@synthesize vertexProgram=_vertexProgram - In the implementation block
@property (nonatomic,copy) NSString * fragmentProgram;              //@synthesize fragmentProgram=_fragmentProgram - In the implementation block
@property (nonatomic,copy) NSDictionary * uniforms;                 //@synthesize uniforms=_uniforms - In the implementation block
@property (assign,nonatomic) RCTSGVec2 shadowOffset;                //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) RCTSGVec4 shadowColor;                 //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) double shadowAmount;                   //@synthesize shadowAmount=_shadowAmount - In the implementation block
@property (nonatomic,copy) NSArray * groups;                        //@synthesize groups=_groups - In the implementation block
@property (nonatomic,copy) NSArray * groupsColor;                   //@synthesize groupsColor=_groupsColor - In the implementation block
-(void)updateProps:(id)arg1 ;
-(void)setZtestMode:(int)arg1 ;
-(void)setMaxTextureWidth:(int)arg1 ;
-(void)setMaxTextureHeight:(int)arg1 ;
-(void)setShadowAmount:(double)arg1 ;
-(void)setGroupsColor:(NSArray *)arg1 ;
-(void)renderGather:(RCTSGRenderContext*)arg1 sgview:(id)arg2 matrixStack:(RCTSGMatrix*)arg3 ;
-(void)setVertexProgram:(NSString *)arg1 ;
-(void)setFragmentProgram:(NSString *)arg1 ;
-(void)setZWrite:(BOOL)arg1 ;
-(BOOL)zWrite;
-(int)ztestMode;
-(NSString *)vertexProgram;
-(NSString *)fragmentProgram;
-(unsigned)createTextureFromText;
-(void)setOnTextLayout:(id)arg1 ;
-(int)maxTextureWidth;
-(int)maxTextureHeight;
-(id)onTextLayout;
-(double)shadowAmount;
-(NSArray *)groupsColor;
-(int)vAlign;
-(void)setVAlign:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)setTextColor:(UIColor *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setShadowColor:(RCTSGVec4)arg1 ;
-(void)setShadowOffset:(RCTSGVec2)arg1 ;
-(RCTSGVec2)shadowOffset;
-(RCTSGVec4)shadowColor;
-(UIColor *)textColor;
-(void)setSortOrder:(int)arg1 ;
-(int)sortOrder;
-(NSString *)fontName;
-(int)lineSpacing;
-(void)setLineSpacing:(int)arg1 ;
-(void)setFontSize:(double)arg1 ;
-(void)setFontName:(NSString *)arg1 ;
-(void)setSpacing:(double)arg1 ;
-(double)spacing;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(double)fontSize;
-(NSArray *)groups;
-(void)setLineBreak:(long long)arg1 ;
-(long long)lineBreak;
-(void)setGroups:(NSArray *)arg1 ;
-(void)setUniforms:(NSDictionary *)arg1 ;
-(NSDictionary *)uniforms;
-(void)setProgram:(unsigned)arg1 ;
-(void)setAlign:(long long)arg1 ;
-(long long)align;
@end
