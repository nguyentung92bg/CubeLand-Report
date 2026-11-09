/* IL2CPP: Rotatelab.Scripts.RemoteSolverClient.<Solve>d__5$$MoveNext
bool Rotatelab_Scripts_RemoteSolverClient__Solve_d__5__MoveNext (Rotatelab_Scripts_RemoteSolverClient__Solve_d__5_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RemoteSolverClient.<Solve>d__5$$MoveNext
   bool Rotatelab_Scripts_RemoteSolverClient__Solve_d__5__MoveNext
   (Rotatelab_Scripts_RemoteSolverClient__Solve_d__5_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Scripts_RemoteSolverClient__Solve_d__5__MoveNext_105b460(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  
  pcVar6 = (char *)(_UNK_0106bc04 + 0x106b47c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106bc08 + 0x106b490));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106bc0c + 0x106b49c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106bc10 + 0x106b4a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106bc14 + 0x106b4b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106bc18 + 0x106b4c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106bc1c + 0x106b4cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106bc20 + 0x106b4d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106bc24 + 0x106b4e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106bc28 + 0x106b4f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106bc2c + 0x106b4fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106bc30 + 0x106b508));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106bc34 + 0x106b514));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106bc38 + 0x106b520));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106bc3c + 0x106b52c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106bc40 + 0x106b538));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106bc44 + 0x106b544));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106bc48 + 0x106b550));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106bc4c + 0x106b55c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106bc50 + 0x106b568));
    *pcVar6 = '\x01';
  }
  if (*(int *)(param_1 + 8) != 1) {
    if (*(int *)(param_1 + 8) != 0) {
      return 0;
    }
    puVar1 = *(undefined4 **)(_UNK_0106bc54 + 0x106b5a4);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar2 = thunk_FUN_00f00cdc(*puVar1);
    System_Object___ctor_2bb93bc(uVar2,0);
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x28),uVar2);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x28) + 0xc);
    *puVar1 = uVar2;
    thunk_FUN_00ec5080(puVar1,uVar2);
    iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106bc58 + 0x106b5fc));
    Rotatelab_Scripts_SolveRequest___ctor_105bca0();
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar3 + 8) = uVar2;
    thunk_FUN_00ec5080((undefined4 *)(iVar3 + 8),uVar2);
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar5 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(iVar3 + 0x1c) = uVar5;
    *(undefined4 *)(iVar3 + 0x18) = uVar2;
    *(undefined4 *)(iVar3 + 0x14) = 0x4072c000;
    *(undefined4 *)(iVar3 + 0x10) = 0;
    thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x1c),uVar5);
    *(undefined4 *)(iVar3 + 0x20) = **(undefined4 **)(_UNK_0106bc5c + 0x106b664);
    thunk_FUN_00ec5080();
    piVar7 = *(int **)(_UNK_0106bc60 + 0x106b67c);
    iVar4 = *piVar7;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar7;
    }
    *(undefined4 *)(iVar3 + 0x24) = **(undefined4 **)(iVar4 + 0x5c);
    thunk_FUN_00ec5080();
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x28) + 0x10);
    *puVar1 = 0;
    thunk_FUN_00ec5080(puVar1,0);
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x28) + 8);
    *puVar1 = 0;
    thunk_FUN_00ec5080(puVar1,0);
    piVar7 = (int *)System_Text_Encoding__get_UTF8_2a278d0(0);
    if (*(int *)(**(int **)(_UNK_0106bc64 + 0x106b70c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar2 = Newtonsoft_Json_JsonConvert__SerializeObject_2c33b34(iVar3,0);
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = (**(code **)(*piVar7 + 0x150))(piVar7,uVar2,*(undefined4 *)(*piVar7 + 0x154));
    iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106bc68 + 0x106b760));
    UnityEngine_Networking_UnityWebRequest___ctor_39e808c
              (iVar3,**(undefined4 **)(_UNK_0106bc70 + 0x106b780),
               **(undefined4 **)(_UNK_0106bc6c + 0x106b774),0);
    uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106bc74 + 0x106b798));
    UnityEngine_Networking_UploadHandlerRaw___ctor_39eb058(uVar5,uVar2,0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Networking_UnityWebRequest__set_uploadHandler_39e86b4(iVar3,uVar5,0);
    uVar5 = *(undefined4 *)(param_1 + 0x28);
    uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106bc78 + 0x106b7dc));
    System_Action_object____ctor_1f11414(uVar2,uVar5,**(undefined4 **)(_UNK_0106bc7c + 0x106b7f0),0)
    ;
    uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106bc80 + 0x106b80c));
    Rotatelab_Scripts_SseDownloadHandler___ctor_105bd38(uVar5,uVar2);
    if (iVar3 != 0) {
      UnityEngine_Networking_UnityWebRequest__set_downloadHandler_39e85d4(iVar3,uVar5,0);
      *(int *)(param_1 + 0x30) = iVar3;
      thunk_FUN_00ec5080((int *)(param_1 + 0x30),iVar3);
      *(undefined4 *)(param_1 + 8) = 0xfffffffd;
      if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Networking_UnityWebRequest__SetRequestHeader_39ea1d4
                (*(int *)(param_1 + 0x30),**(undefined4 **)(_UNK_0106bc88 + 0x106b87c),
                 **(undefined4 **)(_UNK_0106bc84 + 0x106b870),0);
      if (*(int *)(param_1 + 0x30) != 0) {
        UnityEngine_Networking_UnityWebRequest__SetRequestHeader_39ea1d4
                  (*(int *)(param_1 + 0x30),**(undefined4 **)(_UNK_0106bc90 + 0x106b8b4),
                   **(undefined4 **)(_UNK_0106bc8c + 0x106b8a8),0);
        iVar3 = *(int *)(param_1 + 0x20);
        if (iVar3 != 0) {
          (**(code **)(iVar3 + 0xc))
                    (*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(param_1 + 0x30),
                     *(undefined4 *)(iVar3 + 0x14));
        }
        if (*(int *)(param_1 + 0x30) != 0) {
          uVar2 = UnityEngine_Networking_UnityWebRequest__SendWebRequest_39e8aa4
                            (*(int *)(param_1 + 0x30),0);
          *(undefined4 *)(param_1 + 0xc) = uVar2;
          thunk_FUN_00ec5080();
          *(undefined4 *)(param_1 + 8) = 1;
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(param_1 + 8) = 0xfffffffd;
  if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Networking_UnityWebRequest__get_result_39e94f4(*(int *)(param_1 + 0x30),0);
  if (iVar3 == 2) {
    if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = UnityEngine_Networking_UnityWebRequest__get_error_39e9424(*(int *)(param_1 + 0x30),0);
    iVar3 = System_String__op_Equality_2a0975c(uVar2,**(undefined4 **)(_UNK_0106bc94 + 0x106b97c),0)
    ;
    if (iVar3 != 0) goto LAB_0106ba6c;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Networking_UnityWebRequest__get_result_39e94f4(*(int *)(param_1 + 0x30),0);
  if (iVar3 == 1) {
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x28) + 8) == 0) {
      if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*(int *)(param_1 + 0x28) + 0x10) == 0) {
        iVar3 = *(int *)(param_1 + 0x24);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        (**(code **)(iVar3 + 0xc))
                  (*(undefined4 *)(iVar3 + 0x20),**(undefined4 **)(_UNK_0106bc9c + 0x106baf0),
                   *(undefined4 *)(iVar3 + 0x14));
      }
      else {
        iVar3 = *(int *)(param_1 + 0x2c);
        if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        (**(code **)(iVar3 + 0xc))
                  (*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x10),
                   *(undefined4 *)(iVar3 + 0x14));
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x24);
      if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(iVar3 + 0xc))
                (*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(*(int *)(param_1 + 0x28) + 8),
                 *(undefined4 *)(iVar3 + 0x14));
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x24);
    if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = UnityEngine_Networking_UnityWebRequest__get_error_39e9424(*(int *)(param_1 + 0x30),0);
    uVar2 = System_String__Concat_29fee38(**(undefined4 **)(_UNK_0106bc98 + 0x106ba40),uVar2,0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar3 + 0x20),uVar2,*(undefined4 *)(iVar3 + 0x14));
  }
LAB_0106ba6c:
  Rotatelab_Scripts_RemoteSolverClient__Solve_d__5____m__Finally1_105be64(param_1);
  return 0;
}

