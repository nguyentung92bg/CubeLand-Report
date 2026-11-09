/* IL2CPP: Rotatelab.UI.CopyTextOnClick$$UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown
void Rotatelab_UI_CopyTextOnClick__UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown (Rotatelab_UI_CopyTextOnClick_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.CopyTextOnClick$$UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown
   void Rotatelab_UI_CopyTextOnClick__UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown
   (Rotatelab_UI_CopyTextOnClick_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData,
   const MethodInfo* method); */

void Rotatelab_UI_CopyTextOnClick__UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown_112004c
               (int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 auStack_28 [16];
  
  pcVar2 = (char *)(_UNK_0113011c + 0x1130068);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01130120 + 0x113007c));
    *pcVar2 = '\x01';
  }
  if (0.0 <= *(float *)(param_1 + 0x18)) {
    uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    if (*(int *)(**(int **)(_UNK_01130124 + 0x11300b4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Scale_2ce4684(auStack_28,uVar1,uVar3,0x3e19999a,0,0,0,0,0,1,0,0,0,0,0);
  }
  return;
}

