/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$set_material
void Rotatelab_UI_SlicedFilledImage__set_material (Rotatelab_UI_SlicedFilledImage_o* __this, UnityEngine_Material_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$set_material
   void Rotatelab_UI_SlicedFilledImage__set_material (Rotatelab_UI_SlicedFilledImage_o* __this,
   UnityEngine_Material_o* value, const MethodInfo* method); */

void Rotatelab_UI_SlicedFilledImage__set_material_1120d60(int *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)(_UNK_0372c7dc + 0x372c758);
  if (*pcVar1 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0372c7e0 + 0x372c76c),param_2,0);
    *pcVar1 = '\x01';
  }
  iVar2 = param_1[4];
  if (*(int *)(**(int **)(_UNK_0372c7e4 + 0x372c784) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Equality_36033f4(iVar2,param_2,0);
  if (iVar2 != 0) {
    return;
  }
  param_1[4] = param_2;
  thunk_FUN_00ec5080(param_1 + 4,param_2);
                    /* WARNING: Could not recover jumptable at 0x0372c7d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined4 *)(*param_1 + 0x1ac));
  return;
}

