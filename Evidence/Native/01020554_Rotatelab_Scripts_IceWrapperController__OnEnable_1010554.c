/* IL2CPP: Rotatelab.Scripts.IceWrapperController$$OnEnable
void Rotatelab_Scripts_IceWrapperController__OnEnable (Rotatelab_Scripts_IceWrapperController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.IceWrapperController$$OnEnable
   void Rotatelab_Scripts_IceWrapperController__OnEnable (Rotatelab_Scripts_IceWrapperController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_IceWrapperController__OnEnable_1010554(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  bool bVar9;
  
  pcVar5 = (char *)(_UNK_01020600 + 0x1020568);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01020604 + 0x102057c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01020608 + 0x1020588));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102060c + 0x1020594));
    *pcVar5 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01020610 + 0x10205a8));
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01020614 + 0x10205bc));
  System_Action_object____ctor_1f11414(uVar2,param_1,**(undefined4 **)(_UNK_01020618 + 0x10205d8),0)
  ;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_01050e30 + 0x1050da4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01050e34 + 0x1050db8),uVar2,0);
    *pcVar5 = '\x01';
  }
  puVar8 = *(undefined4 **)(_UNK_01050e38 + 0x1050dd0);
  iVar3 = *(int *)(iVar1 + 0xbc);
  do {
    iVar7 = 0;
    iVar4 = System_Delegate__Combine_2bbca94(iVar3,uVar2,0);
    if (iVar4 != 0) {
      uVar6 = *puVar8;
      iVar7 = thunk_FUN_00f00bc8(iVar4,uVar6);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(iVar4,uVar6);
      }
    }
    iVar4 = FUN_00efd180((int *)(iVar1 + 0xbc),iVar7,iVar3);
    bVar9 = iVar4 != iVar3;
    iVar3 = iVar4;
  } while (bVar9);
  return;
}

