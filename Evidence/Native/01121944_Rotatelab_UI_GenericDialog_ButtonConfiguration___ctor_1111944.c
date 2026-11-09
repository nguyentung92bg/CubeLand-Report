/* IL2CPP: Rotatelab.UI.GenericDialog.ButtonConfiguration$$.ctor
void Rotatelab_UI_GenericDialog_ButtonConfiguration___ctor (Rotatelab_UI_GenericDialog_ButtonConfiguration_o* __this, System_String_o* label, System_Action_o* action, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.GenericDialog.ButtonConfiguration$$.ctor
   void Rotatelab_UI_GenericDialog_ButtonConfiguration___ctor
   (Rotatelab_UI_GenericDialog_ButtonConfiguration_o* __this, System_String_o* label,
   System_Action_o* action, const MethodInfo* method); */

void Rotatelab_UI_GenericDialog_ButtonConfiguration___ctor_1111944
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  
  System_Object___ctor_2bb93bc(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 8),param_2);
  puVar3 = (undefined4 *)(param_1 + 0xc);
  *puVar3 = param_3;
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

