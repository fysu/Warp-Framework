// � 2019 NIREX ALL RIGHTS RESERVED

#ifndef _W_RADIO_BUTTON_H_
#define _W_RADIO_BUTTON_H_

#include "WControl.h"
#include "WLerp.h"

class WRadioButton : public WControl
{
public:
	WRadioButton(const W_INT& zIndex = 0);
	WRadioButton(const W_FLOAT& top, const W_FLOAT& left, const W_FLOAT& bottom, const W_FLOAT& right, const W_INT& zIndex = 0);
	WRadioButton(const WPointF& topleft, const WPointF& botright, const W_INT& zIndex = 0);
	WRadioButton(const WRectF& location, const W_INT& zIndex = 0);
	~WRadioButton(void);

	W_FLOAT BorderThickness(const W_FLOAT& f);
	W_COLOR Foreground(const W_COLOR& col);
	W_COLOR Background(const W_COLOR& col);
	W_COLOR BorderBrush(const W_COLOR& col);

	W_FLOAT BorderThickness(void) const;
	W_COLOR Foreground(void) const;
	W_COLOR Background(void) const;
	W_COLOR BorderBrush(void) const;

	void Render(void) override;

	void MouseDown(WMouseArgs* Args) override;
	void MouseEnter(WMouseArgs* Args) override;
	void MouseLeave(WMouseArgs* Args) override;

	std::wstring FontFamily(void) const;
	std::wstring Content(void) const;
	W_FLOAT	FontSize(void) const;

	std::wstring FontFamily(const std::wstring& intake);
	std::wstring Content(const std::wstring& content);
	W_FLOAT	FontSize(const W_FLOAT& intake);

	bool Checked(void) const;
	bool Checked(bool intake);

	std::wstring Group(void) const;
	std::wstring Group(const std::wstring intake);

	bool ShowBorder(void) const;
	bool ShowBorder(bool intake);

protected:
	// Dynamic Color
	void HoverBorderTick(WEntity* sender, WEventArgs* args);
	void HoverBorderDone(WEntity* sender, WEventArgs* args);

	void UnHoverBorderTick(WEntity* sender, WEventArgs* args);
	void UnHoverBorderDone(WEntity* sender, WEventArgs* args);

	WColorTransform* HoverColorBord;
	WColorTransform* UnHoverColorBord;

	void HoverForegroundTick(WEntity* sender, WEventArgs* args);
	void HoverForegroundDone(WEntity* sender, WEventArgs* args);

	void UnHoverForegroundTick(WEntity* sender, WEventArgs* args);
	void UnHoverForegroundDone(WEntity* sender, WEventArgs* args);

	WColorTransform* HoverColorFore;
	WColorTransform* UnHoverColorFore;

	void HoverBackgroundTick(WEntity* sender, WEventArgs* args);
	void HoverBackgroundDone(WEntity* sender, WEventArgs* args);

	void UnHoverBackgroundTick(WEntity* sender, WEventArgs* args);
	void UnHoverBackgroundDone(WEntity* sender, WEventArgs* args);

	WColorTransform* HoverColorBack;
	WColorTransform* UnHoverColorBack;

	// Normal
	std::wstring m_Content;
	std::wstring m_family;
	W_FLOAT m_fsize = 14.0F;

	W_FLOAT m_thickness;

	W_COLOR foreColor;
	W_COLOR backColor;
	W_COLOR bordColor;

	bool m_DrawBorders;
	bool m_isChecked;
	std::wstring m_group;
};

#endif // !_W_RADIO_BUTTON_H_
