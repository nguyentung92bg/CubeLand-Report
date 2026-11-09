/* IL2CPP: Rotatelab.UI.GenericDialog.DialogData$$.ctor
void Rotatelab_UI_GenericDialog_DialogData___ctor (Rotatelab_UI_GenericDialog_DialogData_o* __this, System_String_o* title, System_String_o* message, UnityEngine_Sprite_o* icon, Rotatelab_UI_GenericDialog_ButtonConfiguration_array* buttons, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.GenericDialog.DialogData$$.ctor
   void Rotatelab_UI_GenericDialog_DialogData___ctor (Rotatelab_UI_GenericDialog_DialogData_o*
   __this, System_String_o* title, System_String_o* message, UnityEngine_Sprite_o* icon,
   Rotatelab_UI_GenericDialog_ButtonConfiguration_array* buttons, const MethodInfo* method); */

void Rotatelab_UI_GenericDialog_DialogData___ctor_1111318
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  
  System_Object___ctor_2bb93bc(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 8),param_2);
  *(undefined4 *)(param_1 + 0xc) = param_3;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),param_3);
  *(undefined4 *)(param_1 + 0x10) = param_4;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x10),param_4);
  puVar3 = (undefined4 *)(param_1 + 0x14);
  *puVar3 = param_5;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar3 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar3 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

