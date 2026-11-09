/* IL2CPP: Rotatelab.UI.CopyTextOnClick$$UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp
void Rotatelab_UI_CopyTextOnClick__UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp (Rotatelab_UI_CopyTextOnClick_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.CopyTextOnClick$$UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp
   void Rotatelab_UI_CopyTextOnClick__UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp
   (Rotatelab_UI_CopyTextOnClick_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData,
   const MethodInfo* method); */

void Rotatelab_UI_CopyTextOnClick__UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp_1120128
               (int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined1 auStack_20 [16];
  
  pcVar2 = (char *)(_UNK_011301ec + 0x1130140);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011301f0 + 0x1130154));
    *pcVar2 = '\x01';
  }
  if (0.0 <= *(float *)(param_1 + 0x18)) {
    uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (*(int *)(**(int **)(_UNK_011301f4 + 0x113018c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Scale_2ce4684(auStack_20,uVar1,0x3f800000,0x3e19999a,0,0,0,0,0,1,0,0,0,0,0);
  }
  return;
}

