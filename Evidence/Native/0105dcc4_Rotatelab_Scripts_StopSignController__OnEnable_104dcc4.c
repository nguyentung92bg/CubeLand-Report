/* IL2CPP: Rotatelab.Scripts.StopSignController$$OnEnable
void Rotatelab_Scripts_StopSignController__OnEnable (Rotatelab_Scripts_StopSignController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.StopSignController$$OnEnable
   void Rotatelab_Scripts_StopSignController__OnEnable (Rotatelab_Scripts_StopSignController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_StopSignController__OnEnable_104dcc4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  bool bVar9;
  
  pcVar6 = (char *)(_UNK_0105dd6c + 0x105dcd8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105dd70 + 0x105dcec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105dd74 + 0x105dcf8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105dd78 + 0x105dd04));
    *pcVar6 = '\x01';
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0105dd7c + 0x105dd18));
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0105dd80 + 0x105dd2c));
  System_Action_object____ctor_1f11414(uVar4,param_1,**(undefined4 **)(_UNK_0105dd84 + 0x105dd48),0)
  ;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_01050e30 + 0x1050da4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01050e34 + 0x1050db8));
    *pcVar6 = '\x01';
  }
  puVar8 = *(undefined4 **)(_UNK_01050e38 + 0x1050dd0);
  iVar1 = *(int *)(iVar3 + 0xbc);
  do {
    iVar7 = 0;
    iVar2 = System_Delegate__Combine_2bbca94(iVar1,uVar4,0);
    if (iVar2 != 0) {
      uVar5 = *puVar8;
      iVar7 = thunk_FUN_00f00bc8(iVar2,uVar5);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(iVar2,uVar5);
      }
    }
    iVar2 = FUN_00efd180((int *)(iVar3 + 0xbc),iVar7,iVar1);
    bVar9 = iVar2 != iVar1;
    iVar1 = iVar2;
  } while (bVar9);
  return;
}

