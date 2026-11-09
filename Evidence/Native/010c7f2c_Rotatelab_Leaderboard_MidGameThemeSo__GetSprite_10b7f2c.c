/* IL2CPP: Rotatelab.Leaderboard.MidGameThemeSo$$GetSprite
UnityEngine_Sprite_o* Rotatelab_Leaderboard_MidGameThemeSo__GetSprite (Rotatelab_Leaderboard_MidGameThemeSo_o* __this, int32_t slot, int32_t theme, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.MidGameThemeSo$$GetSprite
   UnityEngine_Sprite_o* Rotatelab_Leaderboard_MidGameThemeSo__GetSprite
   (Rotatelab_Leaderboard_MidGameThemeSo_o* __this, int32_t slot, int32_t theme, const MethodInfo*
   method); */

undefined4
Rotatelab_Leaderboard_MidGameThemeSo__GetSprite_10b7f2c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_010c815c + 0x10c7f4c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c8160 + 0x10c7f60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c8164 + 0x10c7f6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c8168 + 0x10c7f78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c816c + 0x10c7f84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c8170 + 0x10c7f90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c8174 + 0x10c7f9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c8178 + 0x10c7fa8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c817c + 0x10c7fb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c8180 + 0x10c7fc0));
    *pcVar3 = '\x01';
  }
  piVar5 = *(int **)(_UNK_010c8184 + 0x10c7fd8);
  uVar7 = *(undefined4 *)(param_1 + 0xc);
  iStack_24 = 0;
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar2[1];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar5 + 0x5c);
    }
    uVar4 = *puVar2;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c8188 + 0x10c8028));
    System_Func_object__Int32Enum__bool____ctor_239e560
              (iVar6,uVar4,**(undefined4 **)(_UNK_010c818c + 0x10c8048),0);
    piVar5 = (int *)(*(int *)(*piVar5 + 0x5c) + 4);
    *piVar5 = iVar6;
    thunk_FUN_00ec5080(piVar5,iVar6);
  }
  if (*(int *)(**(int **)(_UNK_010c8190 + 0x10c8070) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__TryFind_object__Int32Enum__1489bc8
                    (uVar7,param_2,iVar6,&iStack_24,**(undefined4 **)(_UNK_010c8194 + 0x10c8098));
  if (iVar1 == 0) {
    uStack_28 = param_2;
    uVar7 = FUN_00ec393c(**(undefined4 **)(_UNK_010c8198 + 0x10c80dc),&uStack_28);
    uVar4 = 0;
    uVar7 = System_String__Format_2a0c264
                      (**(undefined4 **)(_UNK_010c819c + 0x10c80fc),
                       **(undefined4 **)(_UNK_010c81a0 + 0x10c8108),uVar7,0);
    if (*(int *)(**(int **)(_UNK_010c81a4 + 0x10c811c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Debug__LogError_35b24c8(uVar7,param_1,0);
  }
  else if (param_3 == 1) {
    if (iStack_24 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = *(undefined4 *)(iStack_24 + 0x10);
  }
  else {
    if (iStack_24 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = *(undefined4 *)(iStack_24 + 0xc);
  }
  return uVar4;
}

