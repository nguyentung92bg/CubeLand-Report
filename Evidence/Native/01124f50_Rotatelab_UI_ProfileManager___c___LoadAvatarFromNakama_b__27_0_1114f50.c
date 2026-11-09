/* IL2CPP: Rotatelab.UI.ProfileManager.<>c$$<LoadAvatarFromNakama>b__27_0
bool Rotatelab_UI_ProfileManager___c___LoadAvatarFromNakama_b__27_0 (Rotatelab_UI_ProfileManager___c_o* __this, UnityEngine_Sprite_o* avatar, System_String_o* id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.ProfileManager.<>c$$<LoadAvatarFromNakama>b__27_0
   bool Rotatelab_UI_ProfileManager___c___LoadAvatarFromNakama_b__27_0
   (Rotatelab_UI_ProfileManager___c_o* __this, UnityEngine_Sprite_o* avatar, System_String_o* id,
   const MethodInfo* method); */

bool Rotatelab_UI_ProfileManager___c___LoadAvatarFromNakama_b__27_0_1114f50
               (undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01124fd0 + 0x1124f68);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01124fd4 + 0x1124f7c));
    *pcVar4 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_Object__get_name_36081bc(param_2,0);
  if (*(int *)(**(int **)(_UNK_01124fd8 + 0x1124fac) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar4 = (char *)(_UNK_00fd194c + 0xfd18cc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd1950 + 0xfd18e0),param_3,0);
    *pcVar4 = '\x01';
  }
  piVar3 = *(int **)(_UNK_00fd1954 + 0xfd18f4);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  piVar3 = (int *)**(undefined4 **)(iVar1 + 0x5c);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = (**(code **)(*piVar3 + 0xf8))(piVar3,uVar2,param_3,3,*(undefined4 *)(*piVar3 + 0xfc));
  return iVar1 == 0;
}

